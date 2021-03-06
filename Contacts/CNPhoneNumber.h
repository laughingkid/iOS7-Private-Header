/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



@interface CNPhoneNumber : NSObject <NSCopying>

{

    NSString *_stringValue;

}



+ (id)phoneNumberWithStringValue:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSString *countryCode; // @dynamic countryCode;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) NSString *formattedStringValue; // @dynamic formattedStringValue;

- (id)initWithCoder:(id)arg1;

- (id)initWithStringValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;



@end


