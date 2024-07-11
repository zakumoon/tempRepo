
package project1;
import java.util.ArrayList;
import javax.swing.table.DefaultTableModel;

    // @author zk

public class ArrayLIstUI extends javax.swing.JFrame {
    int row = 0;

    ArrayList<Integer> pId = new ArrayList<>();
    ArrayList<String> pName = new ArrayList<>();
    ArrayList<Integer> pType = new ArrayList<>();
    ArrayList<Float> pPrice = new ArrayList<>();
    
    public void Insert(int pos, int row) {
        int j = row;
        while (j > pos) {
            pId.add(j + 1, pId.get(j));
            pName.add(j + 1, pName.get(j));
            pType.add(j + 1, pType.get(j));
            pPrice.add(j + 1, pPrice.get(j));
            j--;
        }
        pId.add(pos, Integer.parseInt(jTextId.getText()));
        pName.add(pos, jTextName.getText());
        pType.add(pos, Integer.parseInt(jTextType.getText()));
        pPrice.add(pos, Float.parseFloat(jTextPrice.getText()));
        row++;
    } 
        
    public void Delete(int k) {
        jTextId.setText(String.valueOf(pId.get(k)));
        jTextName.setText(pName.get(k));
        jTextType.setText(String.valueOf(pType.get(k)));
        jTextPrice.setText(String.valueOf(pPrice.get(k)));

        pId.remove(k);
        pName.remove(k);
        pType.remove(k);
        pPrice.remove(k);
        row--;
    }
    
    public int Search(int k) {
        int loc = pId.indexOf(k);
        return loc;
    }
    public void Sort() {
        for (int i = 0; i < row; i++) {
            int k = 0;
            while (k < row - i - 1) {
                if (pId.get(k) > pId.get(k + 1)) {
                    int tId = pId.get(k);
                    String tName = pName.get(k);
                    int tType = pType.get(k);
                    float tPrice = pPrice.get(k);

                    pId.set(k, pId.get(k + 1));
                    pId.set(k + 1, tId);

                    pName.set(k, pName.get(k + 1));
                    pName.set(k + 1, tName);

                    pType.set(k, pType.get(k + 1));
                    pType.set(k + 1, tType);

                    pPrice.set(k, pPrice.get(k + 1));
                    pPrice.set(k + 1, tPrice);
                }
                k++;
            }
        }
    }
    
    
    public ArrayLIstUI() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jTextId = new javax.swing.JTextField();
        jTextName = new javax.swing.JTextField();
        jTextType = new javax.swing.JTextField();
        jTextPrice = new javax.swing.JTextField();
        jTextRow = new javax.swing.JTextField();
        jPanel2 = new javax.swing.JPanel();
        jBAdd = new javax.swing.JButton();
        jBInsert = new javax.swing.JButton();
        jBDelete = new javax.swing.JButton();
        jBSort = new javax.swing.JButton();
        jBSearch = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTextArea1 = new javax.swing.JTextArea();
        jScrollPane2 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(153, 153, 255));
        jPanel1.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));

        jLabel1.setText("ID");

        jLabel2.setText("NAME");

        jLabel3.setText("TYPE");

        jLabel4.setText("PRICE");

        jLabel5.setText("ROW");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(29, 29, 29)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel4)
                            .addComponent(jLabel3)
                            .addComponent(jLabel5))
                        .addGap(15, 15, 15)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jTextPrice, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short.MAX_VALUE)
                            .addComponent(jTextType, javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jTextRow, javax.swing.GroupLayout.Alignment.TRAILING)))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel2)
                            .addComponent(jLabel1))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jTextId, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short.MAX_VALUE)
                            .addComponent(jTextName))))
                .addContainerGap(53, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(15, 15, 15)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(jTextId, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel2)
                    .addComponent(jTextName, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel3)
                    .addComponent(jTextType, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(jTextPrice, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5)
                    .addComponent(jTextRow, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(14, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 370, 240));

        jPanel2.setBackground(new java.awt.Color(255, 153, 153));
        jPanel2.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));

        jBAdd.setFont(new java.awt.Font("sansserif", 1, 15)); // NOI18N
        jBAdd.setText("ADD");
        jBAdd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBAddActionPerformed(evt);
            }
        });

        jBInsert.setFont(new java.awt.Font("sansserif", 1, 15)); // NOI18N
        jBInsert.setText("INSERT");
        jBInsert.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBInsertActionPerformed(evt);
            }
        });

        jBDelete.setFont(new java.awt.Font("sansserif", 1, 15)); // NOI18N
        jBDelete.setText("DELETE");
        jBDelete.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBDeleteActionPerformed(evt);
            }
        });

        jBSort.setFont(new java.awt.Font("sansserif", 1, 15)); // NOI18N
        jBSort.setText("SORT");
        jBSort.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBSortActionPerformed(evt);
            }
        });

        jBSearch.setFont(new java.awt.Font("sansserif", 1, 15)); // NOI18N
        jBSearch.setText("SEARCH");
        jBSearch.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBSearchActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(15, 15, 15)
                .addComponent(jBAdd, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(28, 28, 28)
                .addComponent(jBInsert, javax.swing.GroupLayout.PREFERRED_SIZE, 90, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(44, 44, 44)
                .addComponent(jBDelete, javax.swing.GroupLayout.PREFERRED_SIZE, 91, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 54, Short.MAX_VALUE)
                .addComponent(jBSort, javax.swing.GroupLayout.PREFERRED_SIZE, 95, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(47, 47, 47)
                .addComponent(jBSearch)
                .addGap(25, 25, 25))
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(18, 18, 18)
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jBAdd, javax.swing.GroupLayout.DEFAULT_SIZE, 43, Short.MAX_VALUE)
                    .addComponent(jBSort, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jBSearch, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jBDelete, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jBInsert, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(15, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 245, 660, 80));

        jScrollPane1.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));

        jTextArea1.setColumns(20);
        jTextArea1.setFont(new java.awt.Font("sansserif", 0, 17)); // NOI18N
        jTextArea1.setRows(5);
        jScrollPane1.setViewportView(jTextArea1);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(375, 0, 285, 240));

        jTable1.setFont(new java.awt.Font("sansserif", 0, 17)); // NOI18N
        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "ID", "NAME", "TYPE", "PRICE"
            }
        ));
        jScrollPane2.setViewportView(jTable1);

        getContentPane().add(jScrollPane2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 330, 660, 290));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jBAddActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jBAddActionPerformed

    pId.add(Integer.parseInt(jTextId.getText()));
    pName.add(jTextName.getText());
    pType.add(Integer.parseInt(jTextType.getText()));
    pPrice.add(Float.parseFloat(jTextPrice.getText()));
        
    }//GEN-LAST:event_jBAddActionPerformed

    private void jBSortActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jBSortActionPerformed
        // TODO add your handling code here:
                Sort();
        int k = 0;
        jTextArea1.setText("---------------------------------------\n");
        jTextArea1.setText(jTextArea1.getText() + "\n" + "ID    NAME    TYPE    PRICE\n");
        jTextArea1.setText(jTextArea1.getText() + "\n" + "----------------------------------\n");

         while (k < row) {
        jTextArea1.setText(jTextArea1.getText() + "\n" + pId.get(k) + "    "
                + pName.get(k) + "    " + pType.get(k) + "    " + pPrice.get(k) + "\n");
        k++;
    }
        
        jTextArea1.setText(jTextArea1.getText() + "------------------------------------\n");
    }//GEN-LAST:event_jBSortActionPerformed

    private void jBInsertActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jBInsertActionPerformed
        // TODO add your handling code here:
        
        int pos = Integer.parseInt(jTextRow.getText());
        Insert(pos, row);
        for (int i = 0; i < row; i++){
            jTable1.setValueAt(pId.get(i), i, 0);
            jTable1.setValueAt(pName.get(i), i, 1);
            jTable1.setValueAt(pType.get(i), i, 2);
            jTable1.setValueAt(pPrice.get(i), i, 3);

        }
        
    }//GEN-LAST:event_jBInsertActionPerformed

    private void jBDeleteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jBDeleteActionPerformed
        // TODO add your handling code here:
        int k = Integer.parseInt(jTextRow.getText());
        Delete(k);
        DefaultTableModel model = (DefaultTableModel) jTable1.getModel();
        model.removeRow(k);
      row++;
    }//GEN-LAST:event_jBDeleteActionPerformed

    private void jBSearchActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jBSearchActionPerformed
        // TODO add your handling code here:
        int id = Integer.parseInt(jTextId.getText());
        int data = Search(id);
         
        if (data > -1){
            jTextArea1.setText(
                "-----------------------" + 
                "\n ID = " + pId.get(data) + 
                "\n NAME = "+ pName.get(data) +
                "\n TYPE = " + pType.get(data) + 
                "\n RPICE = "+ pPrice.get(data) 
            );
        }
        else{
            jTextArea1.setText("Not Found!");
        } 
    }//GEN-LAST:event_jBSearchActionPerformed

    
//@param args the command line arguments
     
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(ArrayLIstUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(ArrayLIstUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(ArrayLIstUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(ArrayLIstUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new ArrayLIstUI().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jBAdd;
    private javax.swing.JButton jBDelete;
    private javax.swing.JButton jBInsert;
    private javax.swing.JButton jBSearch;
    private javax.swing.JButton jBSort;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JTable jTable1;
    private javax.swing.JTextArea jTextArea1;
    private javax.swing.JTextField jTextId;
    private javax.swing.JTextField jTextName;
    private javax.swing.JTextField jTextPrice;
    private javax.swing.JTextField jTextRow;
    private javax.swing.JTextField jTextType;
    // End of variables declaration//GEN-END:variables
}
