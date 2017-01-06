// This file was generated by the create_regs script
#define APERF0_BASE                                              0x7e009800
#define APERF0_APB_ID                                            0x41584950
#define APERF0_GEN_CTRL                                          HW_REGISTER_RW( 0x7e009800 ) 
   #define APERF0_GEN_CTRL_MASK                                  0x00000003
   #define APERF0_GEN_CTRL_WIDTH                                 2
   #define APERF0_GEN_CTRL_RESET                                 0000000000
      #define APERF0_GEN_CTRL_ENABLE_BITS                        0:0
      #define APERF0_GEN_CTRL_ENABLE_SET                         0x00000001
      #define APERF0_GEN_CTRL_ENABLE_CLR                         0xfffffffe
      #define APERF0_GEN_CTRL_ENABLE_MSB                         0
      #define APERF0_GEN_CTRL_ENABLE_LSB                         0
      #define APERF0_GEN_CTRL_ENABLE_RESET                       0x0
      #define APERF0_GEN_CTRL_RESET_BITS                         1:1
      #define APERF0_GEN_CTRL_RESET_SET                          0x00000002
      #define APERF0_GEN_CTRL_RESET_CLR                          0xfffffffd
      #define APERF0_GEN_CTRL_RESET_MSB                          1
      #define APERF0_GEN_CTRL_RESET_LSB                          1
      #define APERF0_GEN_CTRL_RESET_RESET                        0x0
#define APERF0_BW0_CTRL                                          HW_REGISTER_RW( 0x7e009840 ) 
   #define APERF0_BW0_CTRL_MASK                                  0xf0001f1f
   #define APERF0_BW0_CTRL_WIDTH                                 32
   #define APERF0_BW0_CTRL_RESET                                 0000000000
      #define APERF0_BW0_CTRL_BUS_BITS                           4:0
      #define APERF0_BW0_CTRL_BUS_SET                            0x0000001f
      #define APERF0_BW0_CTRL_BUS_CLR                            0xffffffe0
      #define APERF0_BW0_CTRL_BUS_MSB                            4
      #define APERF0_BW0_CTRL_BUS_LSB                            0
      #define APERF0_BW0_CTRL_BUS_RESET                          0x0
      #define APERF0_BW0_CTRL_ID_BITS                            12:8
      #define APERF0_BW0_CTRL_ID_SET                             0x00001f00
      #define APERF0_BW0_CTRL_ID_CLR                             0xffffe0ff
      #define APERF0_BW0_CTRL_ID_MSB                             12
      #define APERF0_BW0_CTRL_ID_LSB                             8
      #define APERF0_BW0_CTRL_ID_RESET                           0x0
      #define APERF0_BW0_CTRL_LATHALT_BITS                       28:28
      #define APERF0_BW0_CTRL_LATHALT_SET                        0x10000000
      #define APERF0_BW0_CTRL_LATHALT_CLR                        0xefffffff
      #define APERF0_BW0_CTRL_LATHALT_MSB                        28
      #define APERF0_BW0_CTRL_LATHALT_LSB                        28
      #define APERF0_BW0_CTRL_LATHALT_RESET                      0x0
      #define APERF0_BW0_CTRL_ID_EN_BITS                         29:29
      #define APERF0_BW0_CTRL_ID_EN_SET                          0x20000000
      #define APERF0_BW0_CTRL_ID_EN_CLR                          0xdfffffff
      #define APERF0_BW0_CTRL_ID_EN_MSB                          29
      #define APERF0_BW0_CTRL_ID_EN_LSB                          29
      #define APERF0_BW0_CTRL_ID_EN_RESET                        0x0
      #define APERF0_BW0_CTRL_EN_BITS                            30:30
      #define APERF0_BW0_CTRL_EN_SET                             0x40000000
      #define APERF0_BW0_CTRL_EN_CLR                             0xbfffffff
      #define APERF0_BW0_CTRL_EN_MSB                             30
      #define APERF0_BW0_CTRL_EN_LSB                             30
      #define APERF0_BW0_CTRL_EN_RESET                           0x0
      #define APERF0_BW0_CTRL_RESET_BITS                         31:31
      #define APERF0_BW0_CTRL_RESET_SET                          0x80000000
      #define APERF0_BW0_CTRL_RESET_CLR                          0x7fffffff
      #define APERF0_BW0_CTRL_RESET_MSB                          31
      #define APERF0_BW0_CTRL_RESET_LSB                          31
      #define APERF0_BW0_CTRL_RESET_RESET                        0x0
#define APERF0_BW0_ATRANS                                        HW_REGISTER_RO( 0x7e009844 ) 
   #define APERF0_BW0_ATRANS_MASK                                0xffffffff
   #define APERF0_BW0_ATRANS_WIDTH                               32
   #define APERF0_BW0_ATRANS_RESET                               0000000000
#define APERF0_BW0_ATWAIT                                        HW_REGISTER_RO( 0x7e009848 ) 
   #define APERF0_BW0_ATWAIT_MASK                                0xffffffff
   #define APERF0_BW0_ATWAIT_WIDTH                               32
   #define APERF0_BW0_ATWAIT_RESET                               0000000000
#define APERF0_BW0_AMAX                                          HW_REGISTER_RO( 0x7e00984c ) 
   #define APERF0_BW0_AMAX_MASK                                  0x00ffffff
   #define APERF0_BW0_AMAX_WIDTH                                 24
   #define APERF0_BW0_AMAX_RESET                                 0000000000
#define APERF0_BW0_WTRANS                                        HW_REGISTER_RO( 0x7e009850 ) 
   #define APERF0_BW0_WTRANS_MASK                                0xffffffff
   #define APERF0_BW0_WTRANS_WIDTH                               32
   #define APERF0_BW0_WTRANS_RESET                               0000000000
#define APERF0_BW0_WTWAIT                                        HW_REGISTER_RO( 0x7e009854 ) 
   #define APERF0_BW0_WTWAIT_MASK                                0xffffffff
   #define APERF0_BW0_WTWAIT_WIDTH                               32
   #define APERF0_BW0_WTWAIT_RESET                               0000000000
#define APERF0_BW0_WMAX                                          HW_REGISTER_RO( 0x7e009858 ) 
   #define APERF0_BW0_WMAX_MASK                                  0x00ffffff
   #define APERF0_BW0_WMAX_WIDTH                                 24
   #define APERF0_BW0_WMAX_RESET                                 0000000000
#define APERF0_BW0_RTRANS                                        HW_REGISTER_RO( 0x7e00985c ) 
   #define APERF0_BW0_RTRANS_MASK                                0xffffffff
   #define APERF0_BW0_RTRANS_WIDTH                               32
   #define APERF0_BW0_RTRANS_RESET                               0000000000
#define APERF0_BW0_RTWAIT                                        HW_REGISTER_RO( 0x7e009860 ) 
   #define APERF0_BW0_RTWAIT_MASK                                0xffffffff
   #define APERF0_BW0_RTWAIT_WIDTH                               32
   #define APERF0_BW0_RTWAIT_RESET                               0000000000
#define APERF0_BW0_RMAX                                          HW_REGISTER_RO( 0x7e009864 ) 
   #define APERF0_BW0_RMAX_MASK                                  0x00ffffff
   #define APERF0_BW0_RMAX_WIDTH                                 24
   #define APERF0_BW0_RMAX_RESET                                 0000000000
#define APERF0_BW0_RPEND                                         HW_REGISTER_RO( 0x7e009868 ) 
   #define APERF0_BW0_RPEND_MASK                                 0x000000ff
   #define APERF0_BW0_RPEND_WIDTH                                8
   #define APERF0_BW0_RPEND_RESET                                0000000000
#define APERF0_BW1_CTRL                                          HW_REGISTER_RW( 0x7e009880 ) 
   #define APERF0_BW1_CTRL_MASK                                  0xf0001f1f
   #define APERF0_BW1_CTRL_WIDTH                                 32
   #define APERF0_BW1_CTRL_RESET                                 0000000000
      #define APERF0_BW1_CTRL_BUS_BITS                           4:0
      #define APERF0_BW1_CTRL_BUS_SET                            0x0000001f
      #define APERF0_BW1_CTRL_BUS_CLR                            0xffffffe0
      #define APERF0_BW1_CTRL_BUS_MSB                            4
      #define APERF0_BW1_CTRL_BUS_LSB                            0
      #define APERF0_BW1_CTRL_BUS_RESET                          0x0
      #define APERF0_BW1_CTRL_ID_BITS                            12:8
      #define APERF0_BW1_CTRL_ID_SET                             0x00001f00
      #define APERF0_BW1_CTRL_ID_CLR                             0xffffe0ff
      #define APERF0_BW1_CTRL_ID_MSB                             12
      #define APERF0_BW1_CTRL_ID_LSB                             8
      #define APERF0_BW1_CTRL_ID_RESET                           0x0
      #define APERF0_BW1_CTRL_LATHALT_BITS                       28:28
      #define APERF0_BW1_CTRL_LATHALT_SET                        0x10000000
      #define APERF0_BW1_CTRL_LATHALT_CLR                        0xefffffff
      #define APERF0_BW1_CTRL_LATHALT_MSB                        28
      #define APERF0_BW1_CTRL_LATHALT_LSB                        28
      #define APERF0_BW1_CTRL_LATHALT_RESET                      0x0
      #define APERF0_BW1_CTRL_ID_EN_BITS                         29:29
      #define APERF0_BW1_CTRL_ID_EN_SET                          0x20000000
      #define APERF0_BW1_CTRL_ID_EN_CLR                          0xdfffffff
      #define APERF0_BW1_CTRL_ID_EN_MSB                          29
      #define APERF0_BW1_CTRL_ID_EN_LSB                          29
      #define APERF0_BW1_CTRL_ID_EN_RESET                        0x0
      #define APERF0_BW1_CTRL_EN_BITS                            30:30
      #define APERF0_BW1_CTRL_EN_SET                             0x40000000
      #define APERF0_BW1_CTRL_EN_CLR                             0xbfffffff
      #define APERF0_BW1_CTRL_EN_MSB                             30
      #define APERF0_BW1_CTRL_EN_LSB                             30
      #define APERF0_BW1_CTRL_EN_RESET                           0x0
      #define APERF0_BW1_CTRL_RESET_BITS                         31:31
      #define APERF0_BW1_CTRL_RESET_SET                          0x80000000
      #define APERF0_BW1_CTRL_RESET_CLR                          0x7fffffff
      #define APERF0_BW1_CTRL_RESET_MSB                          31
      #define APERF0_BW1_CTRL_RESET_LSB                          31
      #define APERF0_BW1_CTRL_RESET_RESET                        0x0
#define APERF0_BW1_ATRANS                                        HW_REGISTER_RO( 0x7e009884 ) 
   #define APERF0_BW1_ATRANS_MASK                                0xffffffff
   #define APERF0_BW1_ATRANS_WIDTH                               32
   #define APERF0_BW1_ATRANS_RESET                               0000000000
#define APERF0_BW1_ATWAIT                                        HW_REGISTER_RO( 0x7e009888 ) 
   #define APERF0_BW1_ATWAIT_MASK                                0xffffffff
   #define APERF0_BW1_ATWAIT_WIDTH                               32
   #define APERF0_BW1_ATWAIT_RESET                               0000000000
#define APERF0_BW1_AMAX                                          HW_REGISTER_RO( 0x7e00988c ) 
   #define APERF0_BW1_AMAX_MASK                                  0x00ffffff
   #define APERF0_BW1_AMAX_WIDTH                                 24
   #define APERF0_BW1_AMAX_RESET                                 0000000000
#define APERF0_BW1_WTRANS                                        HW_REGISTER_RO( 0x7e009890 ) 
   #define APERF0_BW1_WTRANS_MASK                                0xffffffff
   #define APERF0_BW1_WTRANS_WIDTH                               32
   #define APERF0_BW1_WTRANS_RESET                               0000000000
#define APERF0_BW1_WTWAIT                                        HW_REGISTER_RO( 0x7e009894 ) 
   #define APERF0_BW1_WTWAIT_MASK                                0xffffffff
   #define APERF0_BW1_WTWAIT_WIDTH                               32
   #define APERF0_BW1_WTWAIT_RESET                               0000000000
#define APERF0_BW1_WMAX                                          HW_REGISTER_RO( 0x7e009898 ) 
   #define APERF0_BW1_WMAX_MASK                                  0x0000ffff
   #define APERF0_BW1_WMAX_WIDTH                                 16
   #define APERF0_BW1_WMAX_RESET                                 0000000000
#define APERF0_BW1_RTRANS                                        HW_REGISTER_RO( 0x7e00989c ) 
   #define APERF0_BW1_RTRANS_MASK                                0xffffffff
   #define APERF0_BW1_RTRANS_WIDTH                               32
   #define APERF0_BW1_RTRANS_RESET                               0000000000
#define APERF0_BW1_RTWAIT                                        HW_REGISTER_RO( 0x7e0098a0 ) 
   #define APERF0_BW1_RTWAIT_MASK                                0xffffffff
   #define APERF0_BW1_RTWAIT_WIDTH                               32
   #define APERF0_BW1_RTWAIT_RESET                               0000000000
#define APERF0_BW1_RMAX                                          HW_REGISTER_RO( 0x7e0098a4 ) 
   #define APERF0_BW1_RMAX_MASK                                  0x00ffffff
   #define APERF0_BW1_RMAX_WIDTH                                 24
   #define APERF0_BW1_RMAX_RESET                                 0000000000
#define APERF0_BW1_RPEND                                         HW_REGISTER_RO( 0x7e009868 ) 
   #define APERF0_BW1_RPEND_MASK                                 0x000000ff
   #define APERF0_BW1_RPEND_WIDTH                                8
   #define APERF0_BW1_RPEND_RESET                                0000000000
#define APERF0_BW2_CTRL                                          HW_REGISTER_RW( 0x7e0098c0 ) 
   #define APERF0_BW2_CTRL_MASK                                  0xf0001f1f
   #define APERF0_BW2_CTRL_WIDTH                                 32
   #define APERF0_BW2_CTRL_RESET                                 0000000000
      #define APERF0_BW2_CTRL_BUS_BITS                           4:0
      #define APERF0_BW2_CTRL_BUS_SET                            0x0000001f
      #define APERF0_BW2_CTRL_BUS_CLR                            0xffffffe0
      #define APERF0_BW2_CTRL_BUS_MSB                            4
      #define APERF0_BW2_CTRL_BUS_LSB                            0
      #define APERF0_BW2_CTRL_BUS_RESET                          0x0
      #define APERF0_BW2_CTRL_ID_BITS                            12:8
      #define APERF0_BW2_CTRL_ID_SET                             0x00001f00
      #define APERF0_BW2_CTRL_ID_CLR                             0xffffe0ff
      #define APERF0_BW2_CTRL_ID_MSB                             12
      #define APERF0_BW2_CTRL_ID_LSB                             8
      #define APERF0_BW2_CTRL_ID_RESET                           0x0
      #define APERF0_BW2_CTRL_LATHALT_BITS                       28:28
      #define APERF0_BW2_CTRL_LATHALT_SET                        0x10000000
      #define APERF0_BW2_CTRL_LATHALT_CLR                        0xefffffff
      #define APERF0_BW2_CTRL_LATHALT_MSB                        28
      #define APERF0_BW2_CTRL_LATHALT_LSB                        28
      #define APERF0_BW2_CTRL_LATHALT_RESET                      0x0
      #define APERF0_BW2_CTRL_ID_EN_BITS                         29:29
      #define APERF0_BW2_CTRL_ID_EN_SET                          0x20000000
      #define APERF0_BW2_CTRL_ID_EN_CLR                          0xdfffffff
      #define APERF0_BW2_CTRL_ID_EN_MSB                          29
      #define APERF0_BW2_CTRL_ID_EN_LSB                          29
      #define APERF0_BW2_CTRL_ID_EN_RESET                        0x0
      #define APERF0_BW2_CTRL_EN_BITS                            30:30
      #define APERF0_BW2_CTRL_EN_SET                             0x40000000
      #define APERF0_BW2_CTRL_EN_CLR                             0xbfffffff
      #define APERF0_BW2_CTRL_EN_MSB                             30
      #define APERF0_BW2_CTRL_EN_LSB                             30
      #define APERF0_BW2_CTRL_EN_RESET                           0x0
      #define APERF0_BW2_CTRL_RESET_BITS                         31:31
      #define APERF0_BW2_CTRL_RESET_SET                          0x80000000
      #define APERF0_BW2_CTRL_RESET_CLR                          0x7fffffff
      #define APERF0_BW2_CTRL_RESET_MSB                          31
      #define APERF0_BW2_CTRL_RESET_LSB                          31
      #define APERF0_BW2_CTRL_RESET_RESET                        0x0
#define APERF0_BW2_ATRANS                                        HW_REGISTER_RO( 0x7e0098c4 ) 
   #define APERF0_BW2_ATRANS_MASK                                0xffffffff
   #define APERF0_BW2_ATRANS_WIDTH                               32
   #define APERF0_BW2_ATRANS_RESET                               0000000000
#define APERF0_BW2_ATWAIT                                        HW_REGISTER_RO( 0x7e0098c8 ) 
   #define APERF0_BW2_ATWAIT_MASK                                0xffffffff
   #define APERF0_BW2_ATWAIT_WIDTH                               32
   #define APERF0_BW2_ATWAIT_RESET                               0000000000
#define APERF0_BW2_AMAX                                          HW_REGISTER_RO( 0x7e0098cc ) 
   #define APERF0_BW2_AMAX_MASK                                  0x00ffffff
   #define APERF0_BW2_AMAX_WIDTH                                 24
   #define APERF0_BW2_AMAX_RESET                                 0000000000
#define APERF0_BW2_WTRANS                                        HW_REGISTER_RO( 0x7e0098d0 ) 
   #define APERF0_BW2_WTRANS_MASK                                0xffffffff
   #define APERF0_BW2_WTRANS_WIDTH                               32
   #define APERF0_BW2_WTRANS_RESET                               0000000000
#define APERF0_BW2_WTWAIT                                        HW_REGISTER_RO( 0x7e0098d4 ) 
   #define APERF0_BW2_WTWAIT_MASK                                0xffffffff
   #define APERF0_BW2_WTWAIT_WIDTH                               32
   #define APERF0_BW2_WTWAIT_RESET                               0000000000
#define APERF0_BW2_WMAX                                          HW_REGISTER_RO( 0x7e0098d8 ) 
   #define APERF0_BW2_WMAX_MASK                                  0x0ff0ffff
   #define APERF0_BW2_WMAX_WIDTH                                 28
   #define APERF0_BW2_WMAX_RESET                                 0000000000
#define APERF0_BW2_RTRANS                                        HW_REGISTER_RO( 0x7e0098dc ) 
   #define APERF0_BW2_RTRANS_MASK                                0xffffffff
   #define APERF0_BW2_RTRANS_WIDTH                               32
   #define APERF0_BW2_RTRANS_RESET                               0000000000
#define APERF0_BW2_RTWAIT                                        HW_REGISTER_RO( 0x7e0098e0 ) 
   #define APERF0_BW2_RTWAIT_MASK                                0xffffffff
   #define APERF0_BW2_RTWAIT_WIDTH                               32
   #define APERF0_BW2_RTWAIT_RESET                               0000000000
#define APERF0_BW2_RMAX                                          HW_REGISTER_RO( 0x7e0098e4 ) 
   #define APERF0_BW2_RMAX_MASK                                  0x00ffffff
   #define APERF0_BW2_RMAX_WIDTH                                 24
   #define APERF0_BW2_RMAX_RESET                                 0000000000
#define APERF0_BW2_RPEND                                         HW_REGISTER_RO( 0x7e009868 ) 
   #define APERF0_BW2_RPEND_MASK                                 0x000000ff
   #define APERF0_BW2_RPEND_WIDTH                                8
   #define APERF0_BW2_RPEND_RESET                                0000000000