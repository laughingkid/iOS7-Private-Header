/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKNode.h"


@class NSMutableArray, NSString, SKBitmapFont, SKSpriteNode, UIColor;



@interface SKLabelNode : SKNode

{

    float _fontSize;

    CDStruct_83984b6f _fontColor;

    NSString *_fontName;

    NSString *_text;

    SKBitmapFont *_bmf;

    NSMutableArray *_textSprites;

    UIColor *_labelColor;

    float _labelColorBlend;

    long long _labelBlendMode;

    SKSpriteNode *_textSprite;

    long long _horizontalAlignmentMode;

    long long _verticalAlignmentMode;

    struct CGRect _textRect;

}



+ (id)_labelNodeWithFontNamed:(id)arg1;

+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;

+ (id)labelNodeWithFontNamed:(id)arg1;

- (id).cxx_construct;

- (void).cxx_destruct;

- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;

- (void)_initialize;

- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;

@property(nonatomic) long long blendMode;

- (id)childrenInRect:(struct CGRect)arg1;

@property(retain, nonatomic) UIColor *color;

@property(nonatomic) double colorBlendFactor;

- (id)copy;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)createBitmapSpritesForText;

- (void)createSpritesForText;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(retain, nonatomic) UIColor *fontColor;

@property(copy, nonatomic) NSString *fontName;

@property(nonatomic) double fontSize;

- (struct CGRect)frame;

@property(nonatomic) long long horizontalAlignmentMode;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithFontNamed:(id)arg1;

- (id)nodeAtPoint:(struct CGPoint)arg1;

- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(_Bool)arg2;

@property(copy, nonatomic) NSString *text;

@property(nonatomic) long long verticalAlignmentMode;



@end


