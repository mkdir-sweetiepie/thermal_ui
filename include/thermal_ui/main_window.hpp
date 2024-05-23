/**
 * @file /include/thermal_ui/main_window.hpp
 *
 * @brief Qt based gui for %(package)s.
 *
 * @date November 2010
 **/
#ifndef thermal_ui_MAIN_WINDOW_H
#define thermal_ui_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

#include <sensor_msgs/Image.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>

#include <vector>              // 벡터 관련 헤더 파일
#include "std_msgs/String.h"   // ROS 표준 메시지 타입을 사용하는 헤더 파일
#include <opencv2/opencv.hpp>  // OpenCV 라이브러리의 기본 헤더 파일
/*****************************************************************************
** Namespace
*****************************************************************************/

namespace thermal_ui
{
/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(int argc, char** argv, QWidget* parent = 0);
  ~MainWindow();

  cv::Mat clone_mat;  // 원본 이미지 복사

public Q_SLOTS:
  void slotUpdateImg();

private:
  Ui::MainWindowDesign ui;
  QNode qnode;
};

}  // namespace thermal_ui

#endif  // thermal_ui_MAIN_WINDOW_H
