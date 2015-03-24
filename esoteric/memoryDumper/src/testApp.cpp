#include "testApp.h"





//--------------------------------------------------------------
void testApp::setup(){
    temp = new int[1];
    tex.allocate(800, 600, GL_RGB);
}

//--------------------------------------------------------------
void testApp::update(){
    temp-=1000;  // temp-=1000;
    tex.loadData( (unsigned char *)temp, 800, 600, GL_RGB);
}

//--------------------------------------------------------------
void testApp::draw(){    
    tex.draw(0,0);
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