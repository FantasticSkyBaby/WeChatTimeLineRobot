/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIColor;

@interface MMGlowingLabel : XXUnknownSuperclass {
	float _glowSize;
	UIColor* _glowColor;
	float _innerGlowSize;
	UIColor* _innerGlowColor;
}
@property(retain, nonatomic) UIColor* innerGlowColor;
@property(assign, nonatomic) float innerGlowSize;
@property(retain, nonatomic) UIColor* glowColor;
@property(assign, nonatomic) float glowSize;
-(void).cxx_destruct;
-(void)drawTextInRect:(CGRect)rect;
-(void)setup;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
@end
