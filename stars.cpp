#include "stars.hpp"

Stars::Stars(GLfloat radius,GLfloat distance, 
        GLfloat speed,GLfloat selfSpeed,Stars* partenStar):
     radius(radius),distance(distance),speed(speed),
     selfSpeed(selfSpeed),partenStar(partenStar){



 }

void  Stars::drawStar(void){

}

void  Stars::draw(void){



 }

    void Stars:: update(long timeSpan){

    }

Planet::Planet(GLfloat radius,GLfloat distance, 
        GLfloat speed,GLfloat selfSpeed,
        Stars* partenStar,GLfloat rgbaclour[3])
    :Stars(radius,distance,speed,selfSpeed,partenStar){



 };

  void Planet::drawPlanet(void){

}
   void Planet::draw(void){

}

LightPlanet:: LightPlanet(GLfloat radius,GLfloat distance, 
    GLfloat speed,GLfloat selfSpeed,
    Stars* partenStar,GLfloat rgbaclour[])
    :Planet(radius,distance,speed,selfSpeed,partenStar,rgbaclour){




}//There is wring  thing
void LightPlanet:: drawLight(void){



}