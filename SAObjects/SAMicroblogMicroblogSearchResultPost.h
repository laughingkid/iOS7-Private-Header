/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAMicroblogMicroblogSearchResultBase.h"


@class NSArray, NSDate, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;



@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

{

}



+ (id)microblogSearchResultPost;

+ (id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSDate *creationTime;

@property(retain, nonatomic) SADecoratedString *decoratedContent;

@property(copy, nonatomic) NSArray *embeddedHashtags;

@property(copy, nonatomic) NSArray *embeddedImages;

@property(copy, nonatomic) NSArray *embeddedLinks;

@property(copy, nonatomic) NSArray *embeddedMentions;

- (id)encodedClassName;

@property(nonatomic) long long favoritesCount;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *location;

@property(retain, nonatomic) SAUIAppPunchOut *punchOut;

@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *retweetAuthor;

@property(nonatomic) long long retweetCount;

@property(copy, nonatomic) NSURL *webAddress;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end

