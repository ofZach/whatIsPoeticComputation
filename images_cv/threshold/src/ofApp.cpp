#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    myImg.loadImage("red_panda_zpsfef749c4.jpg");
    myImgCopy.allocate(myImg.width, myImg.height, OF_IMAGE_GRAYSCALE);
    
    
//    for (int i = 0; i < myImg.getWidth(); i++){
//        for (int j = 0; j < myImg.getHeight(); j++){
//            
//            ofColor color = myImg.getColor(i, j);
//            float brightness = color.getBrightness();
//            myImgCopy.setColor(i,j, ofColor(brightness));
//            
//        }
//    }
//    
//    myImgCopy.update();
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < myImg.getWidth(); i++){
        for (int j = 0; j < myImg.getHeight(); j++){
            
            ofColor color = myImg.getColor(i, j);
            float brightness = color.getBrightness();
            if (brightness > mouseX){
                myImgCopy.setColor(i,j, ofColor(255));
            } else {
                myImgCopy.setColor(i,j, ofColor(0));
            }
        }
    }
    
    myImgCopy.update();
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myImg.draw(0,0);
    myImgCopy.draw(myImg.width, 0);
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
