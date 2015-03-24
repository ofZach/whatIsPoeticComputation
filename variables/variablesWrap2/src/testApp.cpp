#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(30);
    
    img.allocate(400, 400, OF_IMAGE_GRAYSCALE);
    
    unsigned char * pixels = img.getPixels();
    
    for (int i = 0; i < 400*400; i++){
        pixels[i] = 0;
    }
    
    img.update();
}

//--------------------------------------------------------------
void testApp::update(){

    
    unsigned char * pixels = img.getPixels();
    for (int i = 0; i < 400; i++){
        for (int j = 0; j < 400; j++){
            
            if ( ofDist(mouseX, mouseY, i, j) < 50){
                pixels[ j * 400 + i] += 1;
            } 
            
            pixels[ j * 400 + i]--;
        }
        
        
    }
    
    img.update();
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(255, 255, 255);
    
    img.draw(0,0);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}