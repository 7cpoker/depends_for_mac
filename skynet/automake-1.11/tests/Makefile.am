## Process this file with automake to create Makefile.in

XFAIL_TESTS =					\
all.test					\
auxdir2.test					\
cond17.test					\
txinfo5.test

include $(srcdir)/parallel-tests.am

$(srcdir)/parallel-tests.am: gen-parallel-tests Makefile.am
	(cd $(srcdir) && $(SHELL) ./gen-parallel-tests) >$@

$(parallel_tests): $(parallel_tests:-p.test=.test) Makefile.am
	input=`echo $@ | sed 's,.*/,,; s,-p.test$$,.test,'`; \
	sed 's,^\. \./defs,. ./defs-p,' < $(srcdir)/$$input > $@
	chmod a+rx $@

MAINTAINERCLEANFILES = $(parallel_tests)

defs-p: defs Makefile.am
	sed 's,^AM_INIT_AUTOMAKE$$,&([parallel-tests]),' < defs >$@

TESTS =	\
aclibobj.test \
aclocal.test \
aclocal3.test \
aclocal4.test \
aclocal5.test \
aclocal6.test \
aclocal7.test \
aclocal8.test \
aclocal9.test \
acloca10.test \
acloca11.test \
acloca12.test \
acloca13.test \
acloca14.test \
acloca15.test \
acloca16.test \
acloca17.test \
acloca18.test \
acloca19.test \
acloca20.test \
acloca21.test \
acloca22.test \
acoutnoq.test \
acoutpt.test \
acoutpt2.test \
acoutqnl.test \
acoutbs.test \
acsilent.test \
acsubst.test \
acsubst2.test \
all.test \
alloca.test \
alloca2.test \
alpha.test \
alpha2.test \
amassign.test \
ammissing.test \
amopt.test \
amsubst.test \
ansi.test \
ansi2.test \
ansi3.test \
ansi3b.test \
ansi4.test \
ansi5.test \
ansi6.test \
ansi7.test \
ansi8.test \
ansi9.test \
ansi10.test \
ar.test \
ar2.test \
asm.test \
asm2.test \
asm3.test \
autohdr.test \
autohdr2.test \
autohdr3.test \
autohdr4.test \
automake.test \
auxdir.test \
auxdir2.test \
auxdir3.test \
auxdir4.test \
backsl.test \
backsl2.test \
backsl3.test \
backsl4.test \
badline.test \
badprog.test \
block.test \
bsource.test \
canon.test \
canon2.test \
canon3.test \
canon4.test \
canon5.test \
canon-name.test \
ccnoco.test \
ccnoco2.test \
check.test \
check2.test \
check3.test \
check4.test \
check5.test \
check6.test \
check7.test \
check8.test \
check9.test \
check10.test \
check11.test \
checkall.test \
clean.test \
clean2.test \
colneq.test \
colneq2.test \
colon.test \
colon2.test \
colon3.test \
colon4.test \
colon5.test \
colon6.test \
colon7.test \
color.test \
comment.test \
comment2.test \
comment3.test \
comment4.test \
comment5.test \
comment6.test \
comment7.test \
comment8.test \
comment9.test \
commen10.test \
commen11.test \
compile.test \
compile2.test \
compile_f90_c_cxx.test \
compile_f_c_cxx.test \
cond.test \
cond2.test \
cond3.test \
cond4.test \
cond5.test \
cond6.test \
cond7.test \
cond8.test \
cond9.test \
cond10.test \
cond11.test \
cond13.test \
cond14.test \
cond15.test \
cond16.test \
cond17.test \
cond18.test \
cond19.test \
cond20.test \
cond21.test \
cond22.test \
cond23.test \
cond24.test \
cond25.test \
cond26.test \
cond27.test \
cond28.test \
cond29.test \
cond30.test \
cond31.test \
cond32.test \
cond33.test \
cond34.test \
cond35.test \
cond36.test \
cond37.test \
cond38.test \
cond39.test \
cond40.test \
cond41.test \
cond42.test \
cond43.test \
condd.test \
condhook.test \
condinc.test \
condinc2.test \
condlib.test \
condman.test \
condman2.test \
conf2.test \
confdeps.test \
conff.test \
conff2.test \
confh.test \
confh4.test \
confh5.test \
config.test \
confincl.test \
conflnk.test \
conflnk2.test \
conflnk3.test \
conflnk4.test \
confsub.test \
confvar.test \
confvar2.test \
copy.test \
ctarget1.test \
cxx.test \
cxx2.test \
cxxansi.test \
cxxcpp.test \
cxxlibobj.test \
cxxlink.test \
cxxnoc.test \
cxxo.test \
cygwin32.test \
dash.test \
defun.test \
defun2.test \
dejagnu.test \
dejagnu2.test \
dejagnu3.test \
dejagnu4.test \
dejagnu5.test \
dejagnu6.test \
dejagnu7.test \
depacl2.test \
depcomp.test \
depcomp2.test \
depcomp3.test \
depcomp4.test \
depcomp5.test \
depcomp6.test \
depcomp7.test \
depdist.test \
depend.test \
depend2.test \
depend3.test \
depend4.test \
depend5.test \
depend6.test \
destdir.test \
dirforbid.test \
dirlist.test \
dirlist2.test \
discover.test \
distcleancheck.test \
distcom2.test \
distcom3.test \
distcom4.test \
distcom5.test \
distcom6.test \
distcom7.test \
distdir.test \
distname.test \
dollar.test \
dollarvar.test \
dollarvar2.test \
double.test \
dup2.test \
else.test \
empty.test \
empty2.test \
empty3.test \
empty4.test \
exdir.test \
exdir2.test \
exdir3.test \
exeext.test \
exeext2.test \
exeext3.test \
exeext4.test \
exsource.test \
ext.test \
ext2.test \
extra.test \
extra3.test \
extra4.test \
extra5.test \
extra6.test \
extra7.test \
extra8.test \
f90only.test \
flavor.test \
flibs.test \
fn99.test \
fn99subdir.test \
fnoc.test \
fo.test	\
fort1.test \
fort2.test \
fort4.test \
fort5.test \
fonly.test \
fortdep.test \
fpinst2.test \
fpinstall.test \
gcj.test \
gcj2.test \
gcj3.test \
gcj4.test \
gcj5.test \
getopt.test \
gettext.test \
gettext2.test \
gettext3.test \
gnumake.test \
gnuwarn.test \
gnuwarn2.test \
gnits.test \
gnits2.test \
gnits3.test \
header.test \
help.test \
hfs.test \
hosts.test \
implicit.test \
include.test \
include2.test \
info.test \
init.test \
insh2.test \
install2.test \
installdir.test \
instsh.test \
instsh2.test \
instsh3.test \
instdat.test \
instdat2.test \
instdir.test \
instdir2.test \
instdir-java.test \
instdir-lisp.test \
instdir-ltlib.test \
instdir-prog.test \
instdir-python.test \
instdir-texi.test \
instexec.test \
instfail.test \
instfail-info.test \
instfail-java.test \
instfail-libtool.test \
insthook.test \
instman.test \
instman2.test \
instmany.test \
instmany-mans.test \
instmany-python.test \
instspc.test \
interp.test \
interp2.test \
java.test \
java2.test \
java3.test \
javaprim.test \
javasubst.test \
ldadd.test \
ldflags.test \
lex.test \
lex2.test \
lex3.test \
lex4.test \
lex5.test \
libexec.test \
libobj2.test \
libobj3.test \
libobj4.test \
libobj5.test \
libobj7.test \
libobj8.test \
libobj10.test \
libobj11.test \
libobj12.test \
libobj13.test \
libobj14.test \
library.test \
library2.test \
library3.test \
libtool.test \
libtool2.test \
libtool3.test \
libtool4.test \
libtool5.test \
libtool6.test \
libtool7.test \
libtool8.test \
libtool9.test \
libtoo10.test \
libtoo11.test \
license.test \
license2.test \
link_c_cxx.test	\
link_dist.test \
link_f90_only.test \
link_fc.test \
link_fccxx.test \
link_fcxx.test	\
link_f_only.test \
lisp2.test \
lisp3.test \
lisp4.test \
lisp5.test \
lisp6.test \
lisp7.test \
lisp8.test \
listval.test \
location.test \
longline.test \
longlin2.test \
ltcond.test \
ltcond2.test \
ltconv.test \
ltdeps.test \
ltinstloc.test \
ltlibobjs.test \
ltlibsrc.test \
ltorder.test \
lzma.test \
maintclean.test \
make.test \
makej.test \
makej2.test \
maken.test \
maken2.test \
maken3.test \
maken4.test \
makevars.test \
man.test \
man2.test \
man3.test \
man4.test \
man5.test \
mclean.test \
mdate.test \
mdate2.test \
mdate3.test \
mdate4.test \
mdate5.test \
missing.test \
missing2.test \
missing3.test \
missing4.test \
missing5.test \
missing6.test \
mkinstall.test \
mkinst2.test \
mkinst3.test \
mmode.test \
mmodely.test \
multlib.test \
nobase.test \
nobase-libtool.test \
nobase-python.test \
nodef.test \
nodef2.test \
nodep.test \
nodep2.test \
nodepcomp.test \
nodist.test \
nodist2.test \
nodist3.test \
nogzip.test \
nogzip2.test \
noinst.test \
noinstdir.test \
nolink.test \
nostdinc.test \
notrans.test \
number.test \
objc.test \
objc2.test \
obsolete.test \
order.test \
outdir.test \
output.test \
output2.test \
output3.test \
output4.test \
output5.test \
output6.test \
output7.test \
output8.test \
output9.test \
output10.test \
output11.test \
output12.test \
output13.test \
output-order.test \
overrid.test \
parallel-am.test \
parallel-am2.test \
parallel-am3.test \
parallel-tests.test \
parallel-tests2.test \
parallel-tests3.test \
parallel-tests4.test \
parallel-tests5.test \
parallel-tests6.test \
parallel-tests7.test \
parallel-tests8.test \
parallel-tests9.test \
parse.test \
percent.test \
percent2.test \
phony.test \
pluseq.test \
pluseq2.test \
pluseq3.test \
pluseq4.test \
pluseq5.test \
pluseq6.test \
pluseq7.test \
pluseq8.test \
pluseq9.test \
pluseq10.test \
postproc.test \
ppf77.test \
pr2.test \
pr9.test \
pr72.test \
pr87.test \
pr204.test \
pr211.test \
pr220.test \
pr224.test \
pr229.test \
pr243.test \
pr266.test \
pr279.test \
pr279-2.test \
pr287.test \
pr300-lib.test \
pr300-ltlib.test \
pr300-prog.test \
pr307.test \
pr401.test \
pr401b.test \
pr401c.test \
prefix.test \
primary.test \
primary2.test \
primary3.test \
proginst.test \
python.test \
python2.test \
python3.test \
python4.test \
python5.test \
python6.test \
python7.test \
python8.test \
python9.test \
python10.test \
python11.test \
python12.test \
recurs.test \
recurs2.test \
remake.test \
remake2.test \
remake3.test \
remake4.test \
remake5.test \
remake6.test \
remake7.test \
regex.test \
req.test \
reqd.test \
reqd2.test \
rulepat.test \
sanity.test \
scripts.test \
seenc.test \
silent.test \
silent2.test \
silent3.test \
silent4.test \
silent5.test \
silent6.test \
silent7.test \
sinclude.test \
srcsub.test \
srcsub2.test \
space.test \
specflg.test \
specflg2.test	\
specflg3.test	\
specflg6.test	\
specflg7.test	\
specflg8.test	\
specflg9.test	\
specflg10.test	\
spell.test \
spell2.test \
spell3.test \
spelling.test \
spy.test \
stdinc.test \
stamph2.test \
stdlib.test \
stdlib2.test \
strip.test \
subdir.test \
subdir2.test \
subdir3.test \
subdir4.test \
subdir5.test \
subdir6.test \
subdir7.test \
subdir8.test \
subdir9.test \
subdirbuiltsources.test \
subcond.test \
subcond2.test \
subcond3.test \
subobj.test \
subobj2.test \
subobj3.test \
subobj4.test \
subobj5.test \
subobj6.test \
subobj7.test \
subobj8.test \
subobj9.test \
subobj10.test \
subobjname.test \
subpkg.test \
subpkg2.test \
subpkg3.test \
subpkg4.test \
subst.test \
subst2.test \
subst3.test \
subst4.test \
substref.test \
substre2.test \
substtarg.test \
suffix.test \
suffix2.test \
suffix3.test \
suffix4.test \
suffix5.test \
suffix6.test \
suffix7.test \
suffix8.test \
suffix9.test \
suffix10.test \
suffix11.test \
suffix12.test \
suffix13.test \
symlink.test \
symlink2.test \
symlink3.test \
syntax.test \
tags.test \
tagsub.test \
tar.test \
tar2.test \
tar3.test \
target-cflags.test \
targetclash.test \
txinfo.test \
txinfo2.test \
txinfo3.test \
txinfo4.test \
txinfo5.test \
txinfo6.test \
txinfo7.test \
txinfo8.test \
txinfo9.test \
txinfo10.test \
txinfo13.test \
txinfo16.test \
txinfo17.test \
txinfo18.test \
txinfo19.test \
txinfo20.test \
txinfo21.test \
txinfo22.test \
txinfo23.test \
txinfo24.test \
txinfo25.test \
txinfo26.test \
txinfo27.test \
txinfo28.test \
txinfo29.test \
txinfo30.test \
txinfo31.test \
txinfo32.test \
txinfo33.test \
transform.test \
transform2.test \
unused.test \
upc.test \
upc2.test \
upc3.test \
vala.test \
vala1.test \
vala2.test \
vala3.test \
vala4.test \
vala5.test \
vars.test \
vars3.test \
vartar.test \
version.test \
version2.test \
version3.test \
version4.test \
version6.test \
version7.test \
version8.test \
vpath.test \
vtexi.test \
vtexi2.test \
warnopts.test \
werror.test \
werror2.test \
whoami.test \
xsource.test \
xz.test \
yacc.test \
yacc2.test \
yacc3.test \
yacc4.test \
yacc5.test \
yacc6.test \
yacc7.test \
yacc8.test \
yaccpp.test \
yaccvpath.test \
$(parallel_tests)

EXTRA_DIST = ChangeLog-old gen-parallel-tests $(TESTS)

# Each test case depends on defs, aclocal, and automake.
check_SCRIPTS = defs defs-p aclocal-$(APIVERSION) automake-$(APIVERSION)

clean-local: clean-local-check
.PHONY: clean-local-check
clean-local-check:
	-chmod -R u+rwx *.dir
	-rm -rf defs-p *.dir
