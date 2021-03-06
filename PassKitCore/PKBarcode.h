/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSData, NSDictionary, NSString;



@interface PKBarcode : NSObject <NSSecureCoding>

{

    NSData *_messageData;

    NSDictionary *_options;

    long long _format;

    NSString *_altText;

}



+ (_Bool)supportsSecureCoding;

@property(copy, nonatomic) NSString *altText; // @synthesize altText=_altText;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property long long format; // @synthesize format=_format;

- (unsigned long long)hash;

- (id)initWithBarcodeDictionary:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isTall;

@property(copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;

@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;



@end


