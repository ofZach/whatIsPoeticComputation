#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    img.allocate(500,500, OF_IMAGE_GRAYSCALE);
   
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < img.getWidth(); i++){
        for (int j = 0; j < img.getHeight(); j++){
            
            ofPoint mousePos;
            ofPoint pixelPos;
            
            mousePos.set(mouseX, mouseY);
            pixelPos.set(i,j);
            float distance = (mousePos - pixelPos).length();
            
            if (distance < 1000){
                float pct = 1 - (distance / 1000.0);
                img.getPixelsRef().setColor(i,j, ofColor(255 * pct));
            } else {
                img.getPixelsRef().setColor(i,j, ofColor(0));
            }
            
            //img.getPixelsRef().setColor(i,j, ofColor( i * j / 100  ));
            
        }
    }
    
    img.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    img.draw(0,0);
    
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
