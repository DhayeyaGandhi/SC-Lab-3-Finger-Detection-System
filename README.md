# Finger Detection System

A computer vision application that detects a human hand and counts/recognizes fingers in real time from a webcam feed or static images. Built using **OpenCV** and **MediaPipe**, it serves as the foundation for gesture-based interfaces, sign language recognition, and touchless control systems.

## Features

- Real-time hand detection from webcam feed
- Finger counting (0–5 fingers per hand)
- Support for both hands simultaneously
- Two detection approaches: classical CV (contours + convexity defects) and ML-based (MediaPipe landmarks)
- Gesture classification (e.g., thumbs up, peace sign, fist)
- Lightweight and runs on CPU

## Demo

```
[Webcam Feed] --> [Hand Detection] --> [Landmark Extraction] --> [Finger Count: 3]
```

## Tech Stack

| Component | Technology |
|-----------|-----------|
| Language | Python 3.8+ |
| Computer Vision | OpenCV |
| Hand Tracking | MediaPipe |
| Numerical Ops | NumPy |

## How It Works

1. **Hand Detection** – Locates the hand region in the frame using skin-color segmentation or a pretrained model.
2. **Segmentation** – Isolates the hand from the background (binary mask).
3. **Feature Extraction**
   - *Classical CV*: Contour detection → Convex hull → Convexity defects (finger count = defects + 1)
   - *ML-based*: MediaPipe predicts 21 hand landmarks; a finger is "up" if its tip is above its lower joint
4. **Counting / Classification** – Outputs finger count or matches the pattern to a known gesture.

## Installation

```bash
git clone https://github.com/your-username/finger-detection-system.git
cd finger-detection-system
pip install -r requirements.txt
```

### Requirements

```
opencv-python
mediapipe
numpy
```

## Usage

Run the detector using your webcam:

```bash
python main.py
```

Run on a static image:

```bash
python main.py --image path/to/image.jpg
```

Press `q` to quit the live feed.

## Project Structure

```
finger-detection-system/
│
├── main.py                # Entry point - runs detection loop
├── hand_detector.py        # Hand detection & landmark extraction
├── finger_counter.py       # Finger counting logic
├── utils.py                 # Helper functions
├── requirements.txt
└── README.md
```

## Applications

- Sign language interpretation
- Touchless control (volume, brightness, presentations)
- Virtual mouse
- AR/VR hand tracking
- Gesture-based games
- Accessibility tools

## Challenges

- Lighting and skin-tone variation
- Background clutter and occlusion
- Real-time performance requirements
- Distinguishing visually similar gestures

## Future Improvements

- Multi-hand gesture combinations
- Deep learning-based gesture classifier
- Mobile deployment (TensorFlow Lite)
- Custom gesture training support

## License

This project is licensed under the MIT License.

## Author

Your Name — [your-email@example.com](mailto:your-email@example.com)
