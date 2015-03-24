#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(0);
    {
    counter = (2147483647-5);  // limits!
    }
    font.loadFont("apr.otf", 50);
    
    
}

//--------------------------------------------------------------
void testApp::update(){

    
}

//--------------------------------------------------------------
void testApp::draw(){

    font.drawString(ofToString(counter), 200,200);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    if (key == '+'){
        counter++;
    } else if (key == '-'){
        counter--;
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