/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSURL, SKUIArtworkList;



@interface SKUIVideo : NSObject

{

    NSURL *_url;

    NSString *_title;

    NSString *_runtime;

    SKUIArtworkList *_artworks;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;

@property(readonly, nonatomic) SKUIArtworkList *artworks; // @synthesize artworks=_artworks;

- (id)initWithVideoDictionary:(id)arg1;

@property(readonly, nonatomic) NSString *runtime; // @synthesize runtime=_runtime;

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;



@end


