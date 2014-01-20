/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer, TSUImage;



__attribute__((visibility("hidden")))

@interface TSKHighlightController : NSObject

{

    CALayer *_imageLayer;

    TSUImage *_image;

    struct CGRect _overallRect;

    struct CGAffineTransform _canvasTransform;

    struct CGAffineTransform _layerTransform;

    CALayer *_containingLayer;

    double _viewScale;

    struct CGPath *_path;

}



- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

- (struct CGRect)buildLayersForPath:(struct CGPath *)arg1 withImage:(id)arg2;

- (void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2;

- (void)dealloc;

- (void)disconnect;

- (_Bool)drawRoundedRect;

- (void)hide;

@property(retain, nonatomic) TSUImage *image; // @synthesize image=_image;

@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_containingLayer;

@property(nonatomic) struct CGPath *path; // @synthesize path=_path;

- (void)reset;

- (void)setCanvasTransform:(struct CGAffineTransform)arg1 layerTransform:(struct CGAffineTransform)arg2;

@property(nonatomic) struct CGAffineTransform transform;

@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;



@end

