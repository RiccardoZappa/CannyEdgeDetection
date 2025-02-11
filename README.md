# Canny Edge Detection

Canny Edge Detection is a widely used technique in image processing and computer vision for detecting edges in an image. It consists of four main steps:

## Steps of the Canny Algorithm

1. **Gaussian Smoothing** – Reduces noise using a Gaussian filter.
2. **Gradient Computation** – Identifies regions of intensity change using Sobel operators.
3. **Non-Maximum Suppression** – Thins edges by retaining only local maxima.
4. **Hysteresis Thresholding** – Finalizes the edge map by filtering weak edges.

## Advantages
- Good edge localization.
- Minimizes false positives.
- Noise-resistant due to Gaussian smoothing.

## Applications
- **Image Segmentation**: Divides images into regions based on edges.
- **Object Detection**: Helps identify and track objects in computer vision.
- **Medical Imaging**: Detects structures in CT and MRI scans.
- **Autonomous Vehicles**: Identifies lane boundaries and obstacles.
