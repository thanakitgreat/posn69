function toThaiNum(n) {
    const th = ['๐','๑','๒','๓','๔','๕','๖','๗','๘','๙'];
    return n.toString().replace(/\d/g, x => th[x]);
}

document.addEventListener('DOMContentLoaded', () => {
    const d = document.getElementById('day'), y = document.getElementById('year');
    for(let i=1; i<=31; i++) d.add(new Option(toThaiNum(i), toThaiNum(i)));
    for(let i=2568; i<=2575; i++) y.add(new Option(toThaiNum(i), toThaiNum(i)));
});

function addSignerPair() {
    const list = document.getElementById('signer-list');
    const div = document.createElement('div');
    div.className = 'pair-input';
    div.innerHTML = `
        <div style="display:flex; gap:10px;">
            <div style="flex:1;">
                <input type="text" class="l_com" placeholder="ความเห็นซ้าย">
                <input type="text" class="l_name" placeholder="ชื่อซ้าย">
                <input type="text" class="l_pos" placeholder="ตำแหน่งซ้าย">
            </div>
            <div style="flex:1;">
                <input type="text" class="r_com" placeholder="ความเห็นขวา">
                <input type="text" class="r_name" placeholder="ชื่อขวา">
                <input type="text" class="r_pos" placeholder="ตำแหน่งขวา">
            </div>
        </div>
        <button onclick="this.parentElement.remove()">ลบ</button>
    `;
    list.appendChild(div);
}

async function generateDoc() {
    const pairs = [];
    document.querySelectorAll('.pair-input').forEach(el => {
        pairs.push({
            l_com: el.querySelector('.l_com').value || "",
            l_name: el.querySelector('.l_name').value || "",
            l_pos: el.querySelector('.l_pos').value || "",
            r_com: el.querySelector('.r_com').value || "",
            r_name: el.querySelector('.r_name').value || "",
            r_pos: el.querySelector('.r_pos').value || ""
        });
    });

    const data = {
        dept: document.getElementById('dept').value,
        day: document.getElementById('day').value,
        month: document.getElementById('month').value,
        year: document.getElementById('year').value,
        subject: document.getElementById('subject').value,
        to: document.getElementById('to').value,
        attach: document.getElementById('attach').value || "-",
        content: document.getElementById('content').value,
        req_name: document.getElementById('req_name').value,
        req_pos: document.getElementById('req_pos').value,
        final_name: document.getElementById('final_name').value,
        final_pos: document.getElementById('final_pos').value,
        has_attach: !!document.getElementById('attach').value,
        pairs: pairs
    };

    PizZipUtils.getBinaryContent("template.docx", (err, content) => {
        if (err) { alert("หาไฟล์ template.docx ไม่เจอ!"); return; }
        const zip = new PizZip(content);
        const doc = new window.docxtemplater(zip, { paragraphLoop: true, linebreaks: true });
        doc.render(data);
        const out = doc.getZip().generate({type:"blob", mimeType:"application/vnd.openxmlformats-officedocument.wordprocessingml.document"});
        saveAs(out, `บันทึกข้อความ_${data.req_name}.docx`);
    });
}