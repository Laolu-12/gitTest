#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat srcMat = imread("C:/Users/Lenovo/Desktop/��С��.jpg");
	int height = srcMat.rows;//����
	int width = srcMat.cols;//ÿ��Ԫ�ص���Ԫ������
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			//��ʼ����ÿ������
			uchar average = (srcMat.at<Vec3b>(j,i)[0]+ srcMat.at<Vec3b>(j, i)[1]+ srcMat.at<Vec3b>(j, i)[2]) / 3;
			srcMat.at<Vec3b>(j, i)[0] = average;
			srcMat.at<Vec3b>(j, i)[1] = average;
			srcMat.at<Vec3b>(j, i)[2] = average;
			//�������ش���
		}//���д�������
	}
	imshow("src", srcMat);
	//�ȴ��û�����
	waitKey(0);
	return 0;
}