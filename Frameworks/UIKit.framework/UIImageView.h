/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIImageView : UIView 
{
    id _storage;
}

@property NSInteger drawMode;
@property(retain) UIImage *image;
@property(retain) UIImage *highlightedImage;
@property(getter=isHighlighted) BOOL highlighted;
@property(copy) NSArray *animationImages;
@property(copy) NSArray *highlightedAnimationImages;
@property double animationDuration;
@property NSInteger animationRepeatCount;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

+ (void)_initializeSafeCategory;
+ (id)backgroundImageViewForImage:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)startAnimating;
- (struct CGImage { }*)imageRef;
- (void)setDrawMode:(NSInteger)arg1;
- (id)initWithImage:(id)arg1;
- (BOOL)isHighlighted;
- (BOOL)_shouldDrawImage:(id)arg1;
- (void)_updateState;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setImage:(id)arg1;
- (id)highlightedImage;
- (void)setAnimationImages:(id)arg1;
- (id)animationImages;
- (void)setHighlightedAnimationImages:(id)arg1;
- (id)highlightedAnimationImages;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (double)animationDuration;
- (NSInteger)animationRepeatCount;
- (NSInteger)drawMode;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setAnimationRepeatCount:(NSInteger)arg1;
- (BOOL)_canDrawContent;
- (BOOL)useBlockyMagnificationInClassic;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end