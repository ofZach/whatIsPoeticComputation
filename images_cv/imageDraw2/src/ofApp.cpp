#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    myImg.loadImage("zebra.jpg");
    grabber.initGrabber(640,480);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for (int i = 0; i < grabber.width; i+=10){
        for (int j = 0; j < grabber.height; j+=10){
            
            // get the color of every ten pixels
            ofColor myColor = grabber.getPixelsRef().getColor(i, j);
            
            // get the brightness from the color
            float brightness = myColor.getBrightness();
            
            // scale a variable based on the brightness
            float angle = ofMap( brightness, 0, 255, 0, 90 );
            
            ofPushMatrix();
            ofTranslate(i,j);
            ofRotateZ(angle);
            ofRect(0,0,10,3);
            ofPopMatrix();
            
            
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
