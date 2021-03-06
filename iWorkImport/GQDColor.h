/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQDNameMappable.h"



__attribute__((visibility("hidden")))

@interface GQDColor : NSObject <GQDNameMappable>

{

    double mRed;

    double mGreen;

    double mBlue;

    double mAlpha;

}



+ (id)blackColor;

+ (id)cmykColorFromReader:(struct _xmlTextReader *)arg1;

+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3;

+ (void)readColorFromProcessor:(id)arg1 reader:(struct _xmlTextReader *)arg2;

+ (id)rgbColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(_Bool)arg2;

+ (const struct StateSpec *)stateForReading;

+ (id)whiteColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(_Bool)arg2;

- (double)alphaComponent;

- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;

- (double)blueComponent;

- (id)description;

- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;

- (double)greenComponent;

- (int)htmlBlue;

- (int)htmlGreen;

- (int)htmlRed;

- (id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

- (double)redComponent;



@end


