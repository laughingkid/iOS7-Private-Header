/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSAttributedString, NSURL;



@interface MKMapAttribution : NSObject

{

    NSAttributedString *_string;

    NSURL *_url;

}



- (id)attributedStringWithImage:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSAttributedString *disclosureArrow;

- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3;

@property(readonly, nonatomic) NSAttributedString *string; // @synthesize string=_string;

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;



@end

