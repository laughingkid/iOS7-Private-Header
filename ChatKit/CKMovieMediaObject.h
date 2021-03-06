/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CKAVMediaObject.h"


@interface CKMovieMediaObject : CKAVMediaObject

{

    _Bool _hasVideoTrack;

    _Bool _checkedVideoInfo;

    struct CGSize _pxSize;

}



+ (id)UTITypes;

+ (id)fallbackFilenamePrefix;

+ (_Bool)isPreviewable;

- (struct CGSize)bbSize;

@property(nonatomic) _Bool checkedVideoInfo; // @synthesize checkedVideoInfo=_checkedVideoInfo;

- (id)generateThumbnail;

- (id)generateThumbnailFillToSize:(struct CGSize)arg1;

@property(nonatomic) _Bool hasVideoTrack; // @synthesize hasVideoTrack=_hasVideoTrack;

- (int)mediaType;

- (id)previewForOrientation:(BOOL)arg1;

@property(nonatomic) struct CGSize pxSize; // @synthesize pxSize=_pxSize;

- (void)updateVideoInfo;



@end


