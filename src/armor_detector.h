#ifndef ARMOR_DETECTOR_H
#define ARMOR_DETECTOR_H

#include <opencv2/opencv.hpp>

namespace rm_auto_aim {

class ArmorDetector {
public:
    // 图像预处理：灰度化 + 二值化，返回二值图
    cv::Mat preprocess(const cv::Mat& img);
};

}  // namespace rm_auto_aim

#endif  // ARMOR_DETECTOR_H
