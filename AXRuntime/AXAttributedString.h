/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



#import "NSCopying.h"



@interface AXAttributedString : NSString <NSCopying>

{

    struct __CFAttributedString *_string;

}



+ (id)axAttributedStringWithString:(id)arg1;

+ (id)string;

- (void)appendAXAttributedString:(id)arg1;

- (void)appendString:(id)arg1;

- (id)attributeValueForKey:(id)arg1;

- (id)attributedSubstringFromRange:(struct _NSRange)arg1;

- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)axAttributedStringDescription;

- (struct __CFAttributedString *)cfAttributedString;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (id)coalescedFontAttributes;

- (void)convertAttachmentsWithBlock:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)enumerateAttributesUsingBlock:(id)arg1;

- (_Bool)hasAttribute:(id)arg1;

- (id)initWithCFAttributedString:(struct __CFAttributedString *)arg1;

- (id)initWithString:(id)arg1;

- (_Bool)isAXAttributedString;

- (unsigned long long)length;

- (id)lowercaseString;

- (void)replaceString:(struct __CFString *)arg1;

- (void)setAttribute:(id)arg1 forKey:(id)arg2;

- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange)arg3;

- (void)setAttributes:(id)arg1;

- (void)setAttributes:(id)arg1 withRange:(struct _NSRange)arg2;

- (id)string;

- (id)substringFromIndex:(unsigned long long)arg1;

- (id)uppercaseString;



@end

