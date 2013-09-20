/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUISiriStatusViewDelegate>, SiriUISiriStatusView, UIImageView;

@interface SiriUISiriJogWheelStatusView : UIView <SiriUISiriStatusViewProtocol, SiriUISiriStatusViewAnimationDelegate> {
    <SiriUISiriStatusViewDelegate> *_delegate;
    float _disabledMicOpacity;
    UIImageView *_idleMicView;
    BOOL _idleMicViewHidden;
    int _mode;
    SiriUISiriStatusView *_statusView;
    float _waveyViewWidth;
}

@property <SiriUISiriStatusViewDelegate> * delegate;
@property float disabledMicOpacity;
@property(getter=_idleMicView,readonly) UIImageView * idleMicView;
@property BOOL idleMicViewHidden;
@property int mode;
@property(getter=_statusView,readonly) SiriUISiriStatusView * statusView;
@property float waveyViewWidth;

- (void).cxx_destruct;
- (id)_idleMicView;
- (BOOL)_isWaveformHidden;
- (id)_statusView;
- (id)delegate;
- (float)disabledMicOpacity;
- (BOOL)idleMicViewHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)mode;
- (void)setDelegate:(id)arg1;
- (void)setDisabledMicOpacity:(float)arg1;
- (void)setIdleMicButtonHidden:(BOOL)arg1;
- (void)setIdleMicViewHidden:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setWaveyViewWidth:(float)arg1;
- (void)siriStatusViewFinishedAnimatingToIdle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)waveyViewWidth;

@end