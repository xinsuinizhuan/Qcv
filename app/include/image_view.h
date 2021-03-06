#ifndef __APP_IMAGE_VIEW_H__
#define __APP_IMAGE_VIEW_H__

#include <QWidget>
#include <QScrollArea>

class ImageView : public QScrollArea
{
  Q_OBJECT
public:
  explicit ImageView(QWidget* parent = nullptr);
  ~ImageView();
public slots:
  void SetBackgroundImage(const QImage& image);
  void ZoomIn();
  void ZoomOut();
  void Fit();
  void Original();

  void Save();
signals:
  void ScaleChanged(qreal scale);

private:
  QImage image_;
  class Impl;
  Impl* impl_;
};

#endif //!__APP_IMAGE_VIEW_H__