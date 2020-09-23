#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat srcMat = imread("C:/Users/Lenovo/Desktop/红小豆.jpg",0);
	imshow("src", srcMat);
	//等待用户按键
	waitKey(0);
	return 0;
}