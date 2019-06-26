#ifndef  NCORON_VIEW_H
#define NCORON_VIEW_H

#include <BaseView.h>
#include "ui_NCoronView.h"

class NCoronView : public BaseView
{
	Q_OBJECT
���ܵ��˷ɻ���ʲ�Ͷ���
public:
	NCoronView(QWidget *pWidget = Q_NULLPTR);
	~NCoronView();

	//�������Ҽ�ʱ���ô˺���
	virtual void rightMousePressed(glm::vec3 point);

	//���������ʱ���ô˺���
	virtual void leftMousePressed(glm::vec3 point);

	//˫������Ҽ�ʱ���ô˺���
	virtual void rightMouseDoublePressed(glm::vec3 point);

	//˫��������ʱ���ô˺���
	virtual void leftMouseDoublePressed(glm::vec3 point);
aaaaaaaaaa
	//��������Ҽ����ƶ����ʱ���ô˺���
	virtual void rightMouseMoving(glm::vec3 point);

	//�������������ƶ����ʱ���ô˺���
	virtual void leftMouseMoving(glm::vec3 point);

	//�ͷ�����Ҽ�ʱ���ô˺���
	virtual void rightMouseRelease(glm::vec3 point);

	//�ͷ�������ʱ���ô˺���
	virtual void leftMouseRelease(glm::vec3 point);

	//����������ʱ���ô˺���������d: -1 ���� 1 ����
	virtual void wheelRolling(int d);

	//���̰���ʱ���ô˺���������d: 0 Delete��
	virtual void keyPressed(int key);

	//���ڻ���ʱ���ô˺���
	virtual void draw(glm::mat4 p, glm::mat4 mv, int window_width, int window_height);

	//��ʼ��Opengl��ͼ����ʱ���ô˺���
	virtual void glInit();


private:
	Ui::NcoronWidget NcoronUi;
	

};





#define NCORON_VIEW_H
#endif // ! NCORON_VIEW_H

