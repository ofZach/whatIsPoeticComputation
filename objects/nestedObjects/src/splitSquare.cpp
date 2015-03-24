
#include "splitSquare.h"




void splitSquare::setup( float _x, float _y, float _w, float _h){
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    
    color.set( ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
}


void splitSquare::draw(){
    
//    kill randomly our children?
//    if (ofRandom(0,1) > 0.9999){
//        if (childen.size() > 0){
//            childen.clear();
//        }
//    }
    
    
    if (childen.size() == 0){
        ofSetColor(color);
        ofFill();
        ofRect(x,y,w,h);
    } else {
        for (int i = 0; i < childen.size(); i++){
            childen[i].draw();
        }
    }
    
}
    

void splitSquare::isClicked( int mPosX, int mPosY){
    
    
    
    if ( childen.size() == 0 ){
        
        ofRectangle rect;
        rect.set(x,y,w,h);
        if (rect.inside(mPosX, mPosY)){
            
            // if we've clicked, let's split !!!!!!!!!!!!!!
            splitSquare temp;
            childen.push_back(temp);
            childen.push_back(temp);
            childen.push_back(temp);
            childen.push_back(temp);
            childen[0].setup(x, y, w/2, h/2);
            childen[1].setup(x + w/2, y, w/2, h/2);
            childen[2].setup(x, y + h/2, w/2, h/2);
            childen[3].setup(x+ w/2, y + h/2, w/2, h/2);
 
        }
        
    } else {
        for (int i = 0; i < childen.size(); i++){
            childen[i].isClicked( mPosX, mPosY );
        }
    }
    
};