/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQUOutputBundle.h"



__attribute__((visibility("hidden")))

@interface GQUFileOutputBundle : NSObject <GQUOutputBundle>

{

    struct __CFURL *mOutputUrl;

}



- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;

- (void)dealloc;

- (id)initWithOutputPath:(struct __CFString *)arg1;

- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;

- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;

- (void)setDocumentSize:(struct CGSize)arg1;

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;



@end


