#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    
    ofBackground(0);
    
    number = 1;
    font.loadFont("apr.otf", 32);
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    font.drawString( ofToString(number), 50, 50);
    
    string binary = "";
    
    for (int i = 0; i < 8; i++){
        
        if ((number >> (7-i)) & 0x01){
            font.drawString(  "1" , 50 + i * 30, 100);
        } else {
            font.drawString(  "0" , 50 + i * 30, 100);
        }
    }
    
    //font.drawString(  binary , 50, 100);
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    if (key == 's'){
        number ++;
    } else if (key == 'a'){
        number --;
    }
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