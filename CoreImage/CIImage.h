/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@interface CIImage : NSObject <NSCoding, NSCopying>

{

    void *_priv;

}



+ (id)emptyImage;

+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;

+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;

+ (id)imageWithCGImage:(struct CGImage *)arg1;

+ (id)imageWithCGImage:(struct CGImage *)arg1 options:(id)arg2;

+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;

+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;

+ (id)imageWithColor:(id)arg1;

+ (id)imageWithContentsOfFile:(id)arg1;

+ (id)imageWithContentsOfFile:(id)arg1 options:(id)arg2;

+ (id)imageWithContentsOfURL:(id)arg1;

+ (id)imageWithContentsOfURL:(id)arg1 options:(id)arg2;

+ (id)imageWithData:(id)arg1;

+ (id)imageWithData:(id)arg1 options:(id)arg2;

+ (id)imageWithInternalRepresentation:(void *)arg1;

+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(_Bool)arg3 colorSpace:(struct CGColorSpace *)arg4;

+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;

+ (id)noiseImage;

+ (id)noiseImagePadded;

- (id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4;

- (id)_dictForFeature:(id)arg1 scale:(double)arg2 imageHeight:(float)arg3;

- (id)_imageByApplyingBlur:(double)arg1;

- (id)_imageByApplyingGamma:(double)arg1;

- (id)_imageByPremultiplying;

- (id)_imageByUnpremultiplying;

- (id)_initNaiveWithCGImage:(struct CGImage *)arg1 options:(id)arg2;

- (id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;

- (id)_initWithInternalRepresentation:(void *)arg1;

- (void *)_internalRepresentation;

- (id)_scaleImageToMaxDimension:(unsigned int)arg1;

- (id)autoAdjustmentFilters;

- (id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2;

- (id)autoAdjustmentFiltersWithOptions:(id)arg1;

- (id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3;

- (id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (struct CGRect)extent;

- (id)filteredImage:(id)arg1 keysAndValues:(id)arg2;

- (id)imageByApplyingOrientation:(int)arg1;

- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1;

- (id)imageByCroppingToRect:(struct CGRect)arg1;

- (struct CGAffineTransform)imageTransformForOrientation:(int)arg1;

- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;

- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;

- (id)initWithCGImage:(struct CGImage *)arg1;

- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;

- (id)initWithCGImageSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 options:(id)arg3;

- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;

- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;

- (id)initWithCoder:(id)arg1;

- (id)initWithColor:(id)arg1;

- (id)initWithColorR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1 options:(id)arg2;

- (id)initWithContentsOfURL:(id)arg1;

- (id)initWithContentsOfURL:(id)arg1 options:(id)arg2;

- (id)initWithData:(id)arg1;

- (id)initWithData:(id)arg1 options:(id)arg2;

- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(_Bool)arg3 colorSpace:(struct CGColorSpace *)arg4;

- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;

- (id)properties;

- (struct CGRect)regionOfInterestForImage:(id)arg1 inRect:(struct CGRect)arg2;



@end

