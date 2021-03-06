/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "_UISettingsKeyObserver.h"



@class UILabel, UIView, UIWindow, _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;



__attribute__((visibility("hidden")))

@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver>

{

    _UIMotionAnalyzerSettings *_settings;

    double _smoothingDegree;

    double _referenceShiftSpeed;

    double _distanceMultiplier;

    _Bool _hasReferenceQuaternion;

    union _GLKQuaternion _referenceQuaternion;

    union _GLKQuaternion _absoluteQuaternion;

    double _lastUpdate;

    double _idleStartTime;

    struct UIOffset _idleStartOffset;

    double _jumpThreshold;

    double _idleLeeway;

    double _secondsBeforeIdle;

    double _lockValue;

    double _lockStrength;

    UIWindow *_diagnosticsWindow;

    UILabel *_idleIndicator;

    UIView *_horizontalLockIndicator;

    UIView *_verticalLockIndicator;

    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;

}



- (void)_createDiagnosticsWindow;

- (void)_createDirectionLockIndicators;

- (void)_createIdleIndicator;

- (struct UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;

- (long long)_directionLockStatus;

- (double)_directionLockStrength;

- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;

- (union _GLKQuaternion)_relativeQuaternion;

- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset)arg1;

- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;

- (void)_showIdleUI:(_Bool)arg1;

- (void)_tearDownDiagnosticsWindow;

- (void)_tearDownDirectionLockIndicators;

- (void)_tearDownIdleIndicator;

- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset)arg1;

- (void)_updateDirectionalLockIndicators;

- (void)_updateIdleStateForRawOffset:(struct UIOffset)arg1 timestamp:(double)arg2;

- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;

- (void)_updateSettings;

- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithSettings:(id)arg1;

- (_Bool)isIdleGivenTimestamp:(double)arg1;

- (void)reset;

- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

- (void)updateWithDeviceMotion:(id)arg1;

- (void)updateWithDeviceMotionStruct:(const CDStruct_04e8b4cd *)arg1 timestamp:(double)arg2;

@property(readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose; // @synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose;



@end


