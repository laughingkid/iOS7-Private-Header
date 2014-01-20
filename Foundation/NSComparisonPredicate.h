/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPredicate.h"


@class NSExpression, NSPredicateOperator;



@interface NSComparisonPredicate : NSPredicate

{

    void *_reserved2;

    NSPredicateOperator *_predicateOperator;

    NSExpression *_lhs;

    NSExpression *_rhs;

}



+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;

+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;

+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;

+ (_Bool)supportsSecureCoding;

- (void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2;

- (void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2;

- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;

- (void)allowEvaluation;

- (unsigned long long)comparisonPredicateModifier;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (SEL)customSelector;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;

- (id)generateMetadataDescription;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;

- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;

- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;

- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;

- (_Bool)isEqual:(id)arg1;

- (id)keyPathExpressionForString:(id)arg1;

- (id)leftExpression;

- (unsigned long long)options;

- (id)predicateFormat;

- (id)predicateOperator;

- (unsigned long long)predicateOperatorType;

- (id)predicateWithSubstitutionVariables:(id)arg1;

- (id)rightExpression;

- (void)setPredicateOperator:(id)arg1;



@end

