# MRPT transition

You will find all programs and documents useful to run MRPT calculations as they've been implemented so far.

The notes provide more context into the worflow.

The repository contains:

0. **notes**

   The folder `notes` contains the notes I prepared to help the transition.

   

1. **sqa**

   The folder `sqa` contains the modified files from a fairly recent commit of `sqa`, the Second Quantization Algebra package (as well as the API I developed).

   (see: https://github.com/mussard/SecondQuantizationAlgebra.git)

   

2. **sqa_scripts**

   The folder `sqa_scripts` contains the scripts that use `sqa` to generate the lines of tensor contraction involved in the relevant equations to be solved to get NEVPT and MRLCC perturbation corrections.

   

3. **dice**

   The folder `dice` contains the (only slightly) modified files from a fairly recent commit of `dice`, to produce the RDMs for the workflow.

   (see: https://github.com/sanshar/Dice.git)
   

4. **icpt**

   The folder `icpt` contains the modified files from a fairly recent commit of `icpt`, the Internally Contracted Perturbation Theory package to perform the tensor contractions and solve the Hylleraas functionals for NEVPT and MRLCC.

   (see: https://bastien_mussard@bitbucket.org/sandeep-sharma/icnevpt2.git)
   

5. **pyscf**

   The folder `pyscf` contains the (only slightly) modified files from a fairly recent commit of `pyscf`, which codes the workflow itself, and triggers all the necessary steps to obtain the PT energies.

   (see: https://github.com/sunqm/pyscf.git) 


