/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIImage;



__attribute__((visibility("hidden")))

@interface _UITableViewIndexEntry : NSObject

{

    UIImage *_image;

    id _line;

    struct CGPoint _baselinePoint;

    struct CGRect _bounds;

    struct CGRect _typeBounds;

}



@property(nonatomic) struct CGPoint baselinePoint; // @synthesize baselinePoint=_baselinePoint;

@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;

- (void)dealloc;

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@property(retain, nonatomic) id line; // @synthesize line=_line;

@property(nonatomic) struct CGRect typeBounds; // @synthesize typeBounds=_typeBounds;



@end


