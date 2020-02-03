#ifndef __STARS_HPP__
#define __STARS_HPP__
#include <GL/glut.h>

class Stars
{
    public:
        //运行半径
        GLfloat radius;
        //星球公转速度和自转速度
        GLfloat speed, selfSpeed;
        //星球中心与父节点星球中心距离
        GLfloat distance;
        //星球颜色
        GLfloat rgbaclour[4];
        //父节点星球指针
        Stars* partenStar;
        Stars(GLfloat radius,GLfloat distance, 
        GLfloat speed,GLfloat selfSpeed,Stars* partenStar);
        ~Stars();
        void drawStar(void);
        virtual void draw(void);
        virtual void update(long timeSpan);
    protected:
        GLfloat alphaSelf,alpha;
};

class Planet :public Stars
{
    public:
    Planet(GLfloat radius,GLfloat distance, 
        GLfloat speed,GLfloat selfSpeed,
        Stars* partenStar,GLfloat rgbaclour[3]);
   void drawPlanet(void);
   virtual void draw(void);
};

class LightPlanet : public Planet
{
    public:
        LightPlanet(GLfloat radius,GLfloat distance, 
        GLfloat speed,GLfloat selfSpeed,
        Stars* partenStar,GLfloat rgbaclour[]);
        void drawLight(void);
        virtual void draw(){
            drawLight();
            drawPlanet();
            drawStar();
        }
};


#endif