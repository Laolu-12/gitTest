#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat srcMat = imread("C:/Users/Lenovo/Desktop/��С��.jpg",0);
	imshow("src", srcMat);
	//�ȴ��û�����
	waitKey(0);
	return 0;
}