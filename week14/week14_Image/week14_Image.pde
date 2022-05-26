PImage img,img2;
void setup(){
 size(600,1200);
 img = loadImage("img.jpg");
 img2 = loadImage("img2.jpg");
}
int dy=0;
void draw(){
 background(255);
 imageMode(CENTER);
 image(img,mouseX,mouseY);
 if(mousePressed){
  image(img2,mouseX,mouseY-dy); 
  dy++;
 }
}
