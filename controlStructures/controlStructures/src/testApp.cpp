#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(5);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    
    // small control structure examples
    
    if (mouseX > (ofGetWidth()/2)){
        ofBackground(255);
    } else {
        ofBackground(0);
    }
    
    
    
    /*if (mouseX < 100){
        ofBackground(0);
    } else if ((mouseX >= 100) && (mouseX < 200)){
        ofBackground(100);
    } else {
        ofBackground(255);
        
    }*/
    
    /*
    if ( ((mouseX >= 100) && (mouseX <= 180)) &&
         ((mouseY >= 100) && (mouseY <= 140)) ){
        ofSetColor(255,0,0);
    } else {
        
        ofSetColor(50);
    }
       
    
    
    ofRect(100,100, 80, 40);
    */
    
    
    /*
    ofBackground(0);
    for (int i = 0; i < 100; i++){
        ofSetColor(i*2);
        ofRect(i*10, 100, 8,8);
    }
     */
    
    
    
    
    
//    for (int i = 0; i < 100; i++){
//        for (int j = 0; j < 60; j++){
//            
//                ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
//                ofRect(i*10, j*10, 10,10);
//        }
//    }
    
    
    
   
    
    /*  
     
    int countVal = ofGetFrameNum() % 100*60;
    
    for (int i = 0; i < countVal; i++){
        int x = i % 100;
        int y = i / 100;
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
        ofRect(x*10, y*10, 10,10);
        
    }
    */
    
    
    

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