/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKTrackableAnnotation>, GEOMapRegion, VKAnimation, VKAnnotationTrackingCameraController, VKMapModel, VKTrackingCameraController;

@interface VKMapCameraController : VKCameraController <VKTrackingCameraControllerDelegate, VKCameraControllerDelegate> {
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    int _annotationTrackingZoomStyle;
    double _beganDoublePanPitch;
    double _canonicalSkyHeight;
    } _edgeInsets;
    double _finalPitch;
    double _finalYaw;
    BOOL _isPitchIncreasing;
    BOOL _isPitchable;
    double _lastRotation;
    VKMapModel *_mapModel;
    double _maxDistanceToGroundAlongForwardVector;
    double _minDistanceToGroundAlongForwardVector;
    } _panLastScreenPoint;
    } _panStartScreenPoint;
    VKAnimation *_pitchAnimation;
    double _puckHorizontalOffset;
    VKAnimation *_regionAnimation;
    VKAnimation *_rotationAnimation;
    BOOL _rotationLowZoomSnappingEnabled;
    BOOL _shouldLimitTrackingCameraHeight;
    BOOL _shouldRotationRubberband;
    BOOL _staysCenteredDuringPinch;
    BOOL _staysCenteredDuringRotation;
    double _tracePlaybackSpeedMultiplier;
    VKTrackingCameraController *_trackingCameraController;
    int _trackingCameraPanStyle;
    double _userZoomFocusStyleGroundspanMeters;
    double _userZoomFocusStyleMaxGroundspanMeters;
    double _userZoomFocusStyleMinGroundspanMeters;
    VKAnimation *_zoomAnimation;
}

@property BOOL allowDatelineWraparound;
@property(getter=isAnimatingToTrackAnnotation,readonly) BOOL animatingToTrackAnnotation;
@property int annotationTrackingZoomStyle;
@property(readonly) BOOL canEnter3DMode;
@property double canonicalSkyHeight;
@property(readonly) struct { double x1; double x2; double x3; } centerCoordinate;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(getter=isFullyPitched,readonly) BOOL fullyPitched;
@property BOOL isPitchable;
@property(retain) VKMapModel * mapModel;
@property(readonly) GEOMapRegion * mapRegion;
@property(readonly) GEOMapRegion * mapRegionOfInterest;
@property(readonly) double pitch;
@property(getter=isPitched,readonly) BOOL pitched;
@property(readonly) double presentationYaw;
@property BOOL shouldLimitTrackingCameraHeight;
@property BOOL staysCenteredDuringPinch;
@property BOOL staysCenteredDuringRotation;
@property double tracePlaybackSpeedMultiplier;
@property(readonly) <VKTrackableAnnotation> * trackingAnnotation;
@property int trackingCameraPanStyle;
@property(getter=isTrackingHeading,readonly) BOOL trackingHeading;
@property double trackingZoomScale;
@property double userZoomFocusStyleGroundspanMeters;
@property double userZoomFocusStyleMaxGroundspanMeters;
@property double userZoomFocusStyleMinGroundspanMeters;
@property(readonly) double yaw;

- (id).cxx_construct;
- (void)_animateToPosition:(struct VKPoint { double x1; double x2; double x3; })arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id)arg5 completion:(id)arg6;
- (struct CGPoint { float x1; float x2; })_centerScreenPoint;
- (id)_mapRegionIgnoringFarAmount:(double)arg1;
- (struct { double x1; double x2; })_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (struct CGPoint { float x1; float x2; })_scaledScreenPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_snapPuckToHorizontalOffset;
- (BOOL)allowDatelineWraparound;
- (double)altitude;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (int)annotationTrackingZoomStyle;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (BOOL)canEnter3DMode;
- (double)canonicalSkyHeight;
- (void)canvasDidLayout;
- (void)canvasFrameDidChange;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clampPitch:(double*)arg1 yaw:(double*)arg2 atTargetPositionZ:(double)arg3;
- (BOOL)clampZoomLevelIfNecessary;
- (float)currentDisplayZoomLevel;
- (float)currentMaximumNormalizedZoomLevel;
- (float)currentMinimumNormalizedZoomLevel;
- (float)currentNormalizedZoomLevel;
- (float)currentStyleZoomLevel;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)dealloc;
- (id)detailedDescription;
- (void)didAnimateInAnnotationMarkers:(id)arg1;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (void)enter3DMode;
- (void)exit3DMode;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (id)init;
- (BOOL)isAnimating;
- (BOOL)isAnimatingToTrackAnnotation;
- (BOOL)isAtDefaultTrackingZoomScale;
- (BOOL)isFullyPitched;
- (BOOL)isPitchable;
- (BOOL)isPitched;
- (BOOL)isTracking;
- (BOOL)isTrackingHeading;
- (id)mapModel;
- (id)mapRegion;
- (id)mapRegionOfInterest;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (int)maximumNormalizedZoomLevel;
- (int)minimumNormalizedZoomLevel;
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;
- (void)pan:(struct CGPoint { float x1; float x2; })arg1;
- (void)panWithOffset:(struct CGPoint { float x1; float x2; })arg1 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)pinch:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)pitch:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (double)pitch;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)rotateToPitch:(double)arg1 withPoint:(const struct VKPoint { double x1; double x2; double x3; }*)arg2 preserveAltitude:(BOOL)arg3 animated:(BOOL)arg4 exaggerate:(BOOL)arg5;
- (void)rotateToYaw:(double)arg1 withPoint:(const struct VKPoint { double x1; double x2; double x3; }*)arg2 animated:(BOOL)arg3;
- (double)rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (void)runAnimation:(id)arg1;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setAnnotationTrackingZoomStyle:(int)arg1;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setIsPitchable:(BOOL)arg1;
- (void)setMapModel:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id)arg5;
- (void)setPuckHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setStaysCenteredDuringRotation:(BOOL)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingCameraPanStyle:(int)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (BOOL)shouldLimitTrackingCameraHeight;
- (BOOL)snapMapIfNecessary:(const struct VKPoint { double x1; double x2; double x3; }*)arg1 animated:(BOOL)arg2;
- (void)startCameraMotionAnimated:(BOOL)arg1 pounceCompletionHandler:(id)arg2;
- (void)startPanning:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPinching:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitching:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startRotating:(struct CGPoint { float x1; float x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)staysCenteredDuringPinch;
- (BOOL)staysCenteredDuringRotation;
- (void)stopCameraMotion;
- (void)stopPanning:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinching:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitching:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRegionAnimation;
- (void)stopRotating:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTrackingAnnotation;
- (void)tapZoom:(struct CGPoint { float x1; float x2; })arg1 levels:(double)arg2 completionHandler:(id)arg3;
- (int)tileSize;
- (double)tracePlaybackSpeedMultiplier;
- (id)trackingAnnotation;
- (void)trackingCameraController:(id)arg1 updatedStartAnimationTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2 orientation:(const struct { double x1[4][4]; }*)arg3;
- (int)trackingCameraPanStyle;
- (double)trackingZoomScale;
- (void)updateCameraContext:(id)arg1;
- (BOOL)updateCameraToPositionOrientationLimits;
- (void)updateCameraZBounds;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (double)userZoomFocusStyleGroundspanMeters;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (id)viewportInfo;
- (void)willAnimateInAnnotationMarkers:(id)arg1;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id)arg3;
- (void)zoom:(double)arg1 withPoint:(struct VKPoint { double x1; double x2; double x3; })arg2 completionHandler:(id)arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)zoomToLevel:(double)arg1 withPoint:(struct VKPoint { double x1; double x2; double x3; })arg2;

@end
