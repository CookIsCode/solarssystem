
#include <GL/glut.h>
#include "stars.hpp"
#include "solarsystem.hpp"

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH  700
#define HEIGHT 700

Solarsystem solarsystem;
void onDisplay(){
    solarsystem.onDisplay();
}

void onUpdate(){
    solarsystem.onUpdate();
}

void onKeyboard(unsigned char key, int x, int y){
    solarsystem.onKeyboard( key, x, y);
 }

int main(int argc, char*  argv[]) {
    //初始化并处理命令行参数
    glutInit(&argc, argv);
    //指定使用了RGBA颜色索引模式和双缓存窗口
    glutInitDisplayMode(GLUT_RGBA |  GLUT_DOUBLE);
   //设置窗口被创建时左上角位于屏幕的位置
    glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
   //创建一个窗口，其参数为窗口的标题
    glutCreateWindow("SolarSystem at Shiyanlou");
     glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);
    glutMainLoop();
    return 0;
}

