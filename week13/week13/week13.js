function setup() {
  initializeFields();
    createCanvas(300, 300);
    fill(color(0x97, 0xC4, 0xFA));
    textSize(50);
    // /對其正中間
    textAlign(CENTER, CENTER);
}
var choice;

function draw() {
    background(color(0xFF, 0xFA, 0xE8));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
}
function mousePressed() {
    // /會在0.0~3.0(不包括3.0)取出整數
    choice = int(random(3)) % 3;
}

function initializeFields() {
    choice = -1;
}
