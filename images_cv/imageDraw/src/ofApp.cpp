#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    myImg.loadImage("zebra.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    //myImg.draw(0,0);
    
    for (int i = 0; i < myImg.width; i+=10){
        for (int j = 0; j < myImg.height; j+=10){
            
            // get the color of every ten pixels
            ofColor myColor = myImg.getColor(i, j);
            
            // get the brightness from the color
            float brightness = myColor.getBrightness();
            
            // scale a variable based on the brightness
            float radius = ofMap( brightness, 0, 255, 3, 5 );
            
            // draw a circle
            ofCircle(i,j,radius);
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
