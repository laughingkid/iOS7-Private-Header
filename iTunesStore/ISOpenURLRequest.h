/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString, NSURL;



@interface ISOpenURLRequest : NSObject <NSCopying>

{

    _Bool _isITunesStoreURL;

    NSString *_targetIdentifier;

    NSString *_urlBagKey;

    NSURL *_url;

}



+ (id)openURLRequestWithURL:(id)arg1;

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_url;

@property(copy, nonatomic) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithURL:(id)arg1;

- (id)initWithURLBagKey:(id)arg1;

@property(nonatomic, getter=isITunesStoreURL) _Bool ITunesStoreURL; // @synthesize ITunesStoreURL=_isITunesStoreURL;

@property(copy, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;



@end

