/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIImage;



__attribute__((visibility("hidden")))

@interface CILumaMap : CIFilter

{

    CIImage *inputImage;

    CIImage *_tableImage;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

- (const char *)lumaTable;

- (id)outputImage;

- (void)setDefaults;



@end


