#ifndef  NCORON_VIEW_H
#define NCORON_VIEW_H

#include <BaseView.h>
#include "ui_NCoronView.h"

class NCoronView : public BaseView
{
	Q_OBJECT
；受到了飞机喀什劳动法
public:
	NCoronView(QWidget *pWidget = Q_NULLPTR);
	~NCoronView();

	//点击鼠标右键时调用此函数
	virtual void rightMousePressed(glm::vec3 point);

	//点击鼠标左键时调用此函数
	virtual void leftMousePressed(glm::vec3 point);

	//双击鼠标右键时调用此函数
	virtual void rightMouseDoublePressed(glm::vec3 point);

	//双击鼠标左键时调用此函数
	virtual void leftMouseDoublePressed(glm::vec3 point);
aaaaaaaaaa
	//按下鼠标右键并移动鼠标时调用此函数
	virtual void rightMouseMoving(glm::vec3 point);

	//按下鼠标左键并移动鼠标时调用此函数
	virtual void leftMouseMoving(glm::vec3 point);

	//释放鼠标右键时调用此函数
	virtual void rightMouseRelease(glm::vec3 point);

	//释放鼠标左键时调用此函数
	virtual void leftMouseRelease(glm::vec3 point);

	//滚动鼠标滚轮时调用此函数，参数d: -1 向上 1 向下
	virtual void wheelRolling(int d);

	//键盘按下时调用此函数，参数d: 0 Delete键
	virtual void keyPressed(int key);

	//窗口绘制时调用此函数
	virtual void draw(glm::mat4 p, glm::mat4 mv, int window_width, int window_height);

	//初始化Opengl绘图环境时调用此函数
	virtual void glInit();


private:
	Ui::NcoronWidget NcoronUi;
	

};





#define NCORON_VIEW_H
#endif // ! NCORON_VIEW_H

