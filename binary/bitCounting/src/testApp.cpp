#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    bScale = false;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    
    float h, w;
    
    
    
    if (bScale){
        ofTranslate(0, ofMap(mouseY, 0, ofGetHeight(), 0, -ofGetHeight()*7, true));
        h = ofGetHeight()*8 / 256.0;
        w = (ofGetWidth()- 100) / 8;
    } else {
        h = ofGetHeight() / 256.0;
        w = ofGetWidth() / 8;
    }
    
   
    
    for (int i = 0; i < 256; i++){
        for (int j = 0; j < 8; j++){
            
            if ( i >> (7-j) & 0x01){
                ofSetColor(255);
            } else {
                ofSetColor(0);
            }
            
            ofFill();
            ofRect(j * w, i*h, w, h);
            
            if (bScale){
                ofSetColor(0,0,0);
                ofNoFill();
                ofRect(j * w, i*h, w, h);
            }
        }
        
        if (bScale){
            
            ofDrawBitmapString( ofToString(i), ofGetWidth() - 100 + 20, (i+1)*h-2);
        }
        
    }
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    
    bScale = !bScale;
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