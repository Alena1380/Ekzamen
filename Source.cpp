#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>

using namespace cv;
using namespace std;
int main()
{
	int height = 1080;
	int width = 1920;
	Mat img = imread("//192.168.1.1/студенты/195/Кленина Елена/Gryffindor.jpg");
	Point textOrg(100, img.rows / 2);
	int fontFace = FONT_HERSHEY_SCRIPT_COMPLEX;
	double fontScale = 2;
	Scalar color(255, 0, 255);
	putText(img, "Hello How A U", textOrg, fontFace, fontScale, color);
	imshow("Maloletniy Goblino", img);
	waitKey(0);
	return 0;

}
