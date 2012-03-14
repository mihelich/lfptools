#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <cstdio>

int main(int argc, char** argv)
{
  if (argc < 3)
  {
    printf("Usage: debayer in.tif out.tif\n");
    return 1;
  }

  cv::Mat bayer = cv::imread(argv[1], CV_LOAD_IMAGE_UNCHANGED);

  cv::Mat bgr;
  int code = CV_BayerRG2BGR;
  //int code = CV_BayerRG2BGR_VNG; // VNG only implemented for 8-bit
  cv::cvtColor(bayer, bgr, code);

  cv::imwrite(argv[2], bgr);
}
